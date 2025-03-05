#include <common/camera.hpp>

Camera::Camera(const glm::vec3 Eye, const glm::vec3 Target)
{
    eye = Eye;
    target = Target;
}

void Camera::calculateMatrices()
{
    // Calculate the view matrix
    view = glm::lookAt(eye, target, worldUp);

    // Calculate the projection matrix
    projection = glm::perspective(fov, aspect, near, far);
}
