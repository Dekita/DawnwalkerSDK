#include "RebelNavigationGenerationExtension.h"

URebelNavigationGenerationExtension::URebelNavigationGenerationExtension() {
    this->bForceNavMeshHole = false;
    this->ExtrudeTop = 300.00f;
    this->ExtrudeBottom = 50.00f;
    this->ExtrudeX = 0.00f;
    this->ExtrudeY = 0.00f;
    this->GeometrySource = ERebelNavigationGenerationExtensionGeometrySource::Box;
    this->Mode = ERebelNavigationGenerationExtensionMode::Modifier;
    this->bDrawDebug = false;
}


