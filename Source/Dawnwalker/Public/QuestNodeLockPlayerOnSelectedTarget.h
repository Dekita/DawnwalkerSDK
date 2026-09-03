#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "QuestNodeLockPlayerOnSelectedTarget.generated.h"

class UActorReferenceType;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeLockPlayerOnSelectedTarget : public UQuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHardLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorReferenceType* LockOnThisNPC;
    
    UQuestNodeLockPlayerOnSelectedTarget();

};

