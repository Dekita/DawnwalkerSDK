#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "DawnwalkerTraversalMetaDataInterface.h"
#include "DawnwalkerTraversalMetaData.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UDawnwalkerTraversalMetaData : public UAssetUserData, public IDawnwalkerTraversalMetaDataInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAntiGravable: 1;
    
public:
    UDawnwalkerTraversalMetaData();


    // Fix for true pure virtual functions not being implemented
};

