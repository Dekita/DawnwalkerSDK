#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NodeOutLinks.h"
#include "RuntimeGraphDescriptor.generated.h"

class UNodeBase;

USTRUCT(BlueprintType)
struct NODERUNTIME_API FRuntimeGraphDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid GraphGuid;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int64, UNodeBase*> Nodes;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int64, FNodeOutLinks> Connections;
    
    FRuntimeGraphDescriptor();
};

