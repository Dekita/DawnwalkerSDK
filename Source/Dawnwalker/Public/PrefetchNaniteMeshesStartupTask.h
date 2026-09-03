#pragma once
#include "CoreMinimal.h"
#include "OptionalDialogueStartupTaskBase.h"
#include "PrefetchNaniteMeshesStartupTask.generated.h"

class UNaniteMeshPrefetchHandle;
class UStaticMesh;

UCLASS(Blueprintable, EditInlineNew)
class DAWNWALKER_API UPrefetchNaniteMeshesStartupTask : public UOptionalDialogueStartupTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UStaticMesh>> MeshesToPrefetch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNaniteMeshPrefetchHandle* NanitePrefetchHandle;
    
public:
    UPrefetchNaniteMeshesStartupTask();

};

