// Fill out your copyright notice in the Description page of Project Settings.

#include "ItemEffectBase.h"

UItemEffectBase::UItemEffectBase() {
	PrimaryComponentTick.bCanEverTick = true;
}

void UItemEffectBase::BeginPlay() {
	Super::BeginPlay();
}

void UItemEffectBase::ActivateEffect(AActor* targetActor) {}
