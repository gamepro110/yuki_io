// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"

#include "ItemEffect.h"
#include <yuki_io/BaseTypes/ItemEffectBase.h>

#include "Pickup.generated.h"

UCLASS()
class YUKI_IO_API APickup : public AActor {
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APickup();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		USphereComponent* collisionSphere;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UStaticMeshComponent* mesh;

	UPROPERTY(VisibleAnywhere, Category = "Pickup")
		TScriptInterface<IItemEffect> itemEffect;

	UFUNCTION()
		void OnOverlapBegin(AActor* pickupActor, AActor* otherActor);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
