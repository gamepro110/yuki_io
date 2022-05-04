// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerDamageble.h"
#include <yuki_io/UI/GameUI.h>

// Sets default values for this component's properties
UPlayerDamageble::UPlayerDamageble() {
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UPlayerDamageble::BeginPlay() {
	Super::BeginPlay();

	if (MainUI_BP != nullptr) {
		mainUiInstance = CreateWidget(GetWorld(), MainUI_BP);
		mainUiInstance->AddToViewport();

		UGameUI* mainUi = Cast<UGameUI>(mainUiInstance);
		if (mainUi) {
			if (mainUi->progressBar_hp) {
				UE_LOG(LogTemp, Warning, TEXT("ProgressBar empty"));
			}
			hpBar = mainUi->progressBar_hp;
		}
	}
}

void UPlayerDamageble::Die() {
	UE_LOG(LogTemp, Warning, TEXT("player died"));
}

void UPlayerDamageble::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) {
	if (hpBar) {
		hpBar->SetPercent(((float)health / maxHealth));
	}
}
