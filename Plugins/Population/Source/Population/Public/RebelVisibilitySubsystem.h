#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "RebelVisibilitySubsystem.generated.h"

class AActor;
class UMaterial;
class UStaticMesh;

UCLASS(Blueprintable)
class POPULATION_API URebelVisibilitySubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStaticMesh* VisibilityMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterial* VisibilityMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterial* DebugVisibilityMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* VisibilityActor;
    
public:
    URebelVisibilitySubsystem();

};

