#pragma once
#include "CoreMinimal.h"
#include "LineImportInfo.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FLineImportInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTextOutdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVoOutdated;
    
    FLineImportInfo();
};

