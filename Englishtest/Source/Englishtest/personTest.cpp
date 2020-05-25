// Fill out your copyright notice in the Description page of Project Settings.


#include "personTest.h"
#include "Camera/CameraComponent.h"


// Sets default values
ApersonTest::ApersonTest()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AutoPossessPlayer=EAutoReceiveInput::Player0;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	UCameraComponent* camera = CreateDefaultSubobject<UCameraComponent>(TEXT("camera"));
	person=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("person"));
	camera->SetupAttachment(RootComponent);
	person->SetupAttachment(RootComponent);
	camera->SetRelativeLocation(FVector(-250.0f,0.0f,250.0f));
	camera->SetRelativeRotation(FRotator(-45.0f,0.0f,0.0f));
}

void ApersonTest::Move_XAxis(float AxisValue)
{
	CurrentVelocity.X=FMath::Clamp(AxisValue,-1.0f,1.0f) *500.0f;
}

void ApersonTest::Move_YAxis(float AxisValue)
{
	CurrentVelocity.Z=FMath::Clamp(AxisValue,-1.0f,1.0f) *500.0f;
}

void ApersonTest::grow()
{
	IsGrowing=true;
}

void ApersonTest::shrink()
{
	IsGrowing=false;
}

// Called when the game starts or when spawned
void ApersonTest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ApersonTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(!CurrentVelocity.IsZero())
	{
		FVector NewLocation = GetActorLocation()+(CurrentVelocity*DeltaTime);
		SetActorLocation(NewLocation);
	}

	float CurrentScale=person->GetComponentScale().X;

	if(IsGrowing)
	{
		CurrentScale+=DeltaTime;
	}
	else
	{
		CurrentScale-=DeltaTime/2;
	}

	CurrentScale=FMath::Clamp(CurrentScale,1.0f,3.0f);
	person->SetWorldScale3D(FVector(CurrentScale));

}

// Called to bind functionality to input
void ApersonTest::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveX",this,&ApersonTest::Move_XAxis);
	PlayerInputComponent->BindAxis("MoveY",this,&ApersonTest::Move_YAxis);
	PlayerInputComponent->BindAction("grow",IE_Pressed,this,&ApersonTest::grow);
	PlayerInputComponent->BindAction("grow",IE_Released,this,&ApersonTest::shrink);
}

