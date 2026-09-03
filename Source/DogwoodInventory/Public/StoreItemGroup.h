#pragma once
#include "CoreMinimal.h"
#include "RandomizedItemGroup.h"
#include "StoreItem.h"
#include "StoreItemGroup.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODINVENTORY_API FStoreItemGroup : public FRandomizedItemGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UniqueOffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStoreItem> StoreItems;
    
    FStoreItemGroup();
};

