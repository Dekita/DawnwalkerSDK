#pragma once
#include "CoreMinimal.h"
#include "QuestNodeWaitingBase_TEMP.h"
#include "QuestNodeNPCBase.generated.h"

class UCommunityStubReferenceType;

UCLASS(Abstract, Blueprintable)
class DAWNWALKER_API UQuestNodeNPCBase : public UQuestNodeWaitingBase_TEMP {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommunityStubReferenceType* NPCReference;
    
public:
    UQuestNodeNPCBase();

};

