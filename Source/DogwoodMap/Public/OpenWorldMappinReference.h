#pragma once
#include "CoreMinimal.h"
#include "QuestMappinReference.h"
#include "OpenWorldMappinRow.h"
#include "OpenWorldMappinReference.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODMAP_API UOpenWorldMappinReference : public UQuestMappinReference {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpenWorldMappinRow OpenWorldMappinRow;
    
public:
    UOpenWorldMappinReference();

};

