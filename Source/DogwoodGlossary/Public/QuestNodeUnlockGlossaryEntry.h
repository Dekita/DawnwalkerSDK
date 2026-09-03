#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "QuestNodeActionBase.h"
#include "QuestNodeUnlockGlossaryEntry.generated.h"

UCLASS(Blueprintable)
class DOGWOODGLOSSARY_API UQuestNodeUnlockGlossaryEntry : public UQuestNodeActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GlossaryEntryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle GlossaryEntryRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoNotDisplayPrompt;
    
public:
    UQuestNodeUnlockGlossaryEntry();

};

