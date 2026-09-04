#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "SoftObjectPtrPersistentCacheRow.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSoftObjectPtrPersistentCacheRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> ActorPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PersistentActorGuid;
    
    DOGWOODQUEST_API FSoftObjectPtrPersistentCacheRow();
};

