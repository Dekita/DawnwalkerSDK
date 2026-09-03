#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "StringTableSupportInterface.h"
#include "EReadableBackgroundType.h"
#include "EReadableCategory.h"
#include "EReadableOrientationType.h"
#include "EReadableSealType.h"
#include "EReadableSectionAlignment.h"
#include "ReadableDecal.h"
#include "ReadableSection.h"
#include "ReadableDataAsset.generated.h"

UCLASS(Blueprintable)
class DOGWOODGLOSSARY_API UReadableDataAsset : public UPrimaryDataAsset, public IStringTableSupportInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ReadableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AddToGlossaryWhenViewed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReadableCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReadableOrientationType orientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReadableBackgroundType Background;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReadableSection> ReadableSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReadableDecal> Decals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReadableSealType Seal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReadableSectionAlignment SealAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XpReward;
    
    UReadableDataAsset();


    // Fix for true pure virtual functions not being implemented
};

