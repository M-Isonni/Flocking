Flocking Plugin

SETUP:

Create a new Blueprint Class From Boid -> this will be your boid, full weights and ranges are settable through the blueprint. You can either add it a mesh
or a particle system in order to have a biggest swarm without having problems due to draw calls.


TARGETS:
If you want your flock to move around a pattern or towards a target you can add elements to its Targets Actors Array. If none is added the Flok will roam around freely.

You can keep your flock at a certain distance from the target setting it's range.

OBSTACLES SETUP:

Create a Blueprint class inheriting from Avoidable. -> this will be your obstacle.

If the Obstacle you are creating will be destroyed remember to call RemoveFromSubsystem() function upon that object right before destroy happens.

HINT: if you are using particle systems on your boids think about using Attractors with negative strength for a more realistic effect.