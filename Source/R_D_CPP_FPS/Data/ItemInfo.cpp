// Fill out your copyright notice in the Description page of Project Settings.


#include "Data/ItemInfo.h"


FGameItemInfo UItemInfo::FindItemInfoForTag(const FGameplayTag& ItemTag) const
{
	for (const FGameItemInfo& Info : ItemInfoArray )
	{
		if (Info.ItemTag.MatchesTagExact(ItemTag))
		{
			return Info;
		}
	}
	UE_LOG(LogTemp, Log, TEXT("Can't find Info") );
	return FGameItemInfo();
}
