#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "ERebelAIAttitude.h"
#include "QuestNodeSetAttitudeTowards.generated.h"

class UActorReferenceType;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeSetAttitudeTowards : public UQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActorReferenceType*> SideAReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActorReferenceType*> SideBReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelAIAttitude AttitudeToSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipWeaponDrawAnimationForSideANPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipWeaponDrawAnimationForSideBNPCs;
    
public:
    UQuestNodeSetAttitudeTowards();

};

