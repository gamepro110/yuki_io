// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DmgBlob.generated.h"

class UStaticMeshComponent;
class USphereComponent;

UCLASS()
class YUKI_IO_API ADmgBlob : public AActor {
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADmgBlob();

	UPROPERTY(EditAnywhere, Category = "Damage")
		int damageAmount;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UStaticMeshComponent* mesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		USphereComponent* collisionSphere;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* hitComp, AActor* otherActor, UPrimitiveComponent* otherComp, int otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);
};
