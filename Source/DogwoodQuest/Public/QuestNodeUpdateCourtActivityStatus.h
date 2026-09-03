#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "QuestNodeActionBase.h"
#include "ECourtEntryStatus.h"
#include "QuestNodeUpdateCourtActivityStatus.generated.h"

UCLASS(Blueprintable)
class DOGWOODQUEST_API UQuestNodeUpdateCourtActivityStatus : public UQuestNodeActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ActivityTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECourtEntryStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> AlertRows;
    
public:
    UQuestNodeUpdateCourtActivityStatus();

};

