#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "QuestAssetExtension.h"
#include "CourtTagQuestAssetExtension.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODMAP_API FCourtTagQuestAssetExtension : public FQuestAssetExtension {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CourtTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFinalQuest;
    
    FCourtTagQuestAssetExtension();
};

