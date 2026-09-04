#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERebelGenericTreeBindingBehaviour.h"
#include "ERebelGenericTreeBindingType.h"
#include "RebelGenericTreeBindingInfo.generated.h"

USTRUCT(BlueprintType)
struct REBELGENERICTREEMODULE_API FRebelGenericTreeBindingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelGenericTreeBindingType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelGenericTreeBindingBehaviour Behaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Source;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SourceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PropertyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Path;
    
    FRebelGenericTreeBindingInfo();
};

