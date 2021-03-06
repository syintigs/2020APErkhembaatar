// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.


#include "English20TimeGameModeBase.h"

void AEnglish20TimeGameModeBase::BeginPlay()
{
    Super::BeginPlay();
}

void AEnglish20TimeGameModeBase::ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass)
{
    if(CurrentWidget!=nullptr)
    {
        CurrentWidget->RemoveFromViewport();
        CurrentWidget=nullptr;
    }

    if(NewWidgetClass!=nullptr)
    {
        CurrentWidget = CreateWidget<UUserWidget>(GetWorld(),NewWidgetClass);
        if(CurrentWidget!=nullptr)
        {
            CurrentWidget ->AddToViewport();
        }
    }
}