// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"

#include "GameUI.generated.h"

class UProgressBar;

UCLASS()
class YUKI_IO_API UGameUI : public UUserWidget {
	GENERATED_BODY()
public:
	UGameUI(const FObjectInitializer& objInit);

	UPROPERTY(EditAnywhere, meta = (BindWidget))
		UProgressBar* progressBar_hp;
};
