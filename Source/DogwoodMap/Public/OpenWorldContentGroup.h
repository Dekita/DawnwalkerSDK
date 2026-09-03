#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenWorldContentMappin.h"
#include "OpenWorldContentGroup.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODMAP_API FOpenWorldContentGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOpenWorldContentMappin> Mappins;
    
    FOpenWorldContentGroup();
};

