#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PaperdollManagementSystem.generated.h"

class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class DOGWOODUI_API UPaperdollManagementSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* PaperdollRenderTarget;
    
public:
    UPaperdollManagementSystem();

};

