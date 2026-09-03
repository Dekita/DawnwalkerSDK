#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "RebelNavigationDebugBoxEntry.h"
#include "RebelNavigationVoxelChunkDebugComponent.generated.h"

UCLASS(Blueprintable, Transient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REBELNAVIGATION_API URebelNavigationVoxelChunkDebugComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRebelNavigationDebugBoxEntry> Boxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 StartCullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 EndCullDistance;
    
public:
    URebelNavigationVoxelChunkDebugComponent(const FObjectInitializer& ObjectInitializer);

};

