#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnCombatStartedWithDefinitionDelegateDelegate.generated.h"

class UCommunityNPCDefinitionBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnCombatStartedWithDefinitionDelegate, const UCommunityNPCDefinitionBase*, NPCDefinition, FGameplayTag, EnemyAIFaction, const UCommunityNPCDefinitionBase*, BossDefinition, FGameplayTag, BossFaction);

