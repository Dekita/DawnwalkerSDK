#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RebelAudioAssetRedirectorRow.generated.h"

USTRUCT(BlueprintType)
struct REBELAUDIO_API FRebelAudioAssetRedirectorRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName From;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName To;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    FRebelAudioAssetRedirectorRow();
};

