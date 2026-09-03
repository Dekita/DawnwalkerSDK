#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CourtEntry.h"
#include "CompoundCourtEntry.generated.h"

class UQuest;

UCLASS(Blueprintable)
class DOGWOODQUEST_API UCompoundCourtEntry : public UCourtEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuest* TargetQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCourtEntry*> Children;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChildEntryFactThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ThresholdFactTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AlliedFactTag;
    
    UCompoundCourtEntry();

};

