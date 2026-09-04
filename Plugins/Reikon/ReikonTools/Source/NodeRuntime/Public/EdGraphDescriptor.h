#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EdGraphDescriptor.generated.h"

class UEdGraph;
class UEdGraphNode;
class UNodeBase;

USTRUCT(BlueprintType)
struct NODERUNTIME_API FEdGraphDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEdGraph* Graph;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UEdGraphNode*, int64> GraphNodes;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int64, UNodeBase*> Nodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid GraphGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ParentGraphGuid;
    
    FEdGraphDescriptor();
};

