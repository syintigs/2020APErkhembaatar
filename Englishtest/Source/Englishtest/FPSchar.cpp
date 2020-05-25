// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSchar.h"
#include "Engine.h"

// Sets default values
AFPSchar::AFPSchar()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AFPSchar::BeginPlay()
{
	Super::BeginPlay();
	if(GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1,5.0f, FColor::Red, TEXT("We are using FPSCharacter."));
	}
}

void AFPSchar::MoveForward(float value)
{
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction,value);
}

void AFPSchar::MoveRight(float value)
{
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	AddMovementInput(Direction,value);
}

void AFPSchar::checkRay()
{
	FHitResult* HitResult = new FHitResult();
	FVector StartTrace = GetNavAgentLocation()+FVector(0,0,150);
	FVector ForwardVector = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	FVector EndTrace = ((ForwardVector*5000.f)+StartTrace);
	FCollisionQueryParams* TraceParams = new FCollisionQueryParams();

	DrawDebugLine(GetWorld(),StartTrace,EndTrace,FColor(255,0,0), true);
	
}

void AFPSchar::StartJump()
{
	bPressedJump=true;
}

void AFPSchar::StopJump()
{
	bPressedJump=false;
}

// Called every frame
void AFPSchar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


// Called to bind functionality to input
void AFPSchar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveForward", this, &AFPSchar::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFPSchar::MoveRight);
	PlayerInputComponent->BindAxis("Turn",this, &AFPSchar::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp",this, &AFPSchar::AddControllerPitchInput);
	PlayerInputComponent->BindAction("jump",IE_Pressed,this,&AFPSchar::StartJump);
	PlayerInputComponent->BindAction("jump",IE_Released,this,&AFPSchar::StopJump);
	PlayerInputComponent->BindAction("ray",IE_Pressed,this,&AFPSchar::checkRay);
}

