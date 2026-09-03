#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EWwiseAssetLibraryRefType.h"
#include "WwiseAssetLibraryRef.generated.h"

USTRUCT(BlueprintType)
struct WWISEPACKAGINGRUNTIME_API FWwiseAssetLibraryRef {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EWwiseAssetLibraryRefType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LanguageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoundBankId;
    
    FWwiseAssetLibraryRef();
};

