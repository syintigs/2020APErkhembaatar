// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"


// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyCharacter::MoveRight(float value)
{
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	AddMovementInput(Direction,value);
}

void AMyCharacter::MoveForward(float value)
{
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction,value);
}

void AMyCharacter::StartJump()
{
	bPressedJump=true;
}

void AMyCharacter::StopJump()
{
	bPressedJump=false;
}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveRight",this,&AMyCharacter::MoveRight);
	PlayerInputComponent->BindAxis("MoveForward",this,&AMyCharacter::MoveForward);
	PlayerInputComponent->BindAction("Jump",IE_Pressed,this,&AMyCharacter::StartJump);
	PlayerInputComponent->BindAction("Jump",IE_Released,this,&AMyCharacter::StopJump);
	PlayerInputComponent->BindAxis("Turn",this,&AMyCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp",this,&AMyCharacter::AddControllerPitchInput);
}

