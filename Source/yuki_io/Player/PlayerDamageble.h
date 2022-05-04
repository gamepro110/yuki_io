// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include <yuki_io/BaseTypes/DamagebleBase.h>

#include "PlayerDamageble.generated.h"

class UProgressBar;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class YUKI_IO_API UPlayerDamageble : public UDamagebleBase {
	GENERATED_BODY()
public:
	UPlayerDamageble();

	UPROPERTY(EditAnywhere, Category = "UI HUD")
		TSubclassOf<UUserWidget> MainUI_BP;

	UPROPERTY(VisibleAnywhere, Category = "UI HUD")
		UUserWidget* mainUiInstance;

	UPROPERTY(VisibleAnywhere, Category = "UI HUD")
		UProgressBar* hpBar;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Die() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};
