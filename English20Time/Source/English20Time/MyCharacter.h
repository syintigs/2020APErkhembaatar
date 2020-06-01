// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h" 
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UCLASS()
class ENGLISH20TIME_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void MoveRight(float value);

	UFUNCTION()
	void MoveForward(float value);

	UFUNCTION()
	void StartJump();

	UFUNCTION()
	void StopJump();

	UFUNCTION()
	void CheckRay();
	UPROPERTY()
	UCameraComponent* camera;

	UPROPERTY()
	int debug=false;
	
	UFUNCTION()
	void StartDebug();

	UFUNCTION()
	void StopDebug();
	
};
