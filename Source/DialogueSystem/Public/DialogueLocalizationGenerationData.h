#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DialogueLocalizationGenerationData.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FDialogueLocalizationGenerationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime GenerationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSoftObjectPath, int32> VersionByNativeAsset;
    
    FDialogueLocalizationGenerationData();
};

