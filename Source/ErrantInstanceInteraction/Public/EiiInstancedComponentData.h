#pragma once
#include "CoreMinimal.h"
#include "EiiInstanceData.h"
#include "EiiInstancedComponentData.generated.h"

class AActor;
class UEiiMeshToActorMapping;

USTRUCT(BlueprintType)
struct ERRANTINSTANCEINTERACTION_API FEiiInstancedComponentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InstancedStaticMeshComponentSoftPtrPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> DefaultActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    UEiiMeshToActorMapping* MeshToActorClassMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEiiInstanceData> ConvertedOrRestoredInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    int32 NumOfAppliedConversionsOrRestorations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TArray<int32> CurrentToOriginal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TArray<int32> OriginalToCurrent;
    
    FEiiInstancedComponentData();
};

