// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerDamageble.h"

// Sets default values for this component's properties
UPlayerDamageble::UPlayerDamageble() {
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UPlayerDamageble::BeginPlay() {
	Super::BeginPlay();
}

void UPlayerDamageble::Die() {
	UE_LOG(LogTemp, Warning, TEXT("player died"));
}
