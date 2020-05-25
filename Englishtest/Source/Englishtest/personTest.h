// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "personTest.generated.h"

UCLASS()
class ENGLISHTEST_API ApersonTest : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ApersonTest();
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* person;
	void Move_XAxis(float AxisValue);
	void Move_YAxis(float AxisValue);
	void grow();
	void shrink();

	FVector CurrentVelocity;
	bool IsGrowing;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
