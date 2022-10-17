// Copyright (c) 2018 Doyub Kim
//
// I am making my contributions/submissions to this project solely in my
// personal capacity and am not conveying any rights to any intellectual
// property of any third parties.

#include <pch.hpp>
#include <grid_point_generator2.hpp>

namespace lstme {

void GridPointGenerator2::forEachPoint(
    const BoundingBox2D& boundingBox,
    double spacing,
    const std::function<bool(const Vector2D&)>& callback) const {
    Vector2D position;
    double boxWidth = boundingBox.width();
    double boxHeight = boundingBox.hppeight();

    bool shouldQuit = false;
    for (int j = 0; j * spacing <= boxHeight && !shouldQuit; ++j) {
        position.y = j * spacing + boundingBox.lowerCorner.y;

        for (int i = 0; i * spacing <= boxWidth && !shouldQuit; ++i) {
            position.x = i * spacing + boundingBox.lowerCorner.x;
            if (!callback(position)) {
                shouldQuit = true;
                break;
            }
        }
    }
}

}  // namespace lstme
