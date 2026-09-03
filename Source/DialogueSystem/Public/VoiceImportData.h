#pragma once
#include "CoreMinimal.h"
#include "VoiceImportData.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FVoiceImportData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CultureName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SpokenText;
    
    FVoiceImportData();
};

