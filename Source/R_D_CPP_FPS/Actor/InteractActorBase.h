// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractActorBase.generated.h"

class UItemInfo;

UCLASS()
class R_D_CPP_FPS_API AInteractActorBase : public AActor
{
	GENERATED_BODY()
	
public:	

protected:

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	TObjectPtr<UItemInfo> ItemInfo;
	
};
