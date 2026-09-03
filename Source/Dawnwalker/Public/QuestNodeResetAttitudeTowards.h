#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "QuestNodeResetAttitudeTowards.generated.h"

class UActorReferenceType;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeResetAttitudeTowards : public UQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActorReferenceType*> SideAReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActorReferenceType*> SideBReferences;
    
public:
    UQuestNodeResetAttitudeTowards();

};

