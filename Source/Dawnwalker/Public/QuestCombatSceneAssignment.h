#pragma once
#include "CoreMinimal.h"
#include "QuestCombatSceneAssignment.generated.h"

class UActorReferenceType;

USTRUCT(BlueprintType)
struct FQuestCombatSceneAssignment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActorReferenceType*> SideA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActorReferenceType*> SideB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackDamage;
    
    DAWNWALKER_API FQuestCombatSceneAssignment();
};

