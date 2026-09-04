#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeBindableStructDesc.h"
#include "RebelHLTreePropertyAccess.h"
#include "RebelHLTreePropertyCopy.h"
#include "RebelHLTreePropertyCopyBatch.h"
#include "RebelHLTreePropertyIndirection.h"
#include "RebelHLTreePropertyPathBinding.h"
#include "RebelHLTreePropertyRefPath.h"
#include "RebelHLTreePropertyBindings.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreePropertyBindings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelHLTreeBindableStructDesc> SourceStructs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelHLTreePropertyCopyBatch> CopyBatches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelHLTreePropertyPathBinding> PropertyPathBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRebelHLTreePropertyCopy> PropertyCopies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelHLTreePropertyRefPath> PropertyReferencePaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelHLTreePropertyAccess> PropertyAccesses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRebelHLTreePropertyIndirection> PropertyIndirections;
    
public:
    FRebelHLTreePropertyBindings();
};

