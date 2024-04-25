// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/DataAsset.h"
#include "ItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FGameItemInfo
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FGameplayTag ItemTag = FGameplayTag();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FText ItemName = FText();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FText ItemDescription = FText();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float Durability = 100.f;
	
};

/**
 * 
 */
UCLASS()
class R_D_CPP_FPS_API UItemInfo : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	FGameItemInfo FindItemInfoForTag(const FGameplayTag& ItemTag) const;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	TArray<FGameItemInfo> ItemInfoArray;

};
