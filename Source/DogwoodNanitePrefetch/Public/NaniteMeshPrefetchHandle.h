#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NaniteMeshPrefetchHandle.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class DOGWOODNANITEPREFETCH_API UNaniteMeshPrefetchHandle : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> LoadedMeshes;
    
public:
    UNaniteMeshPrefetchHandle();

};

