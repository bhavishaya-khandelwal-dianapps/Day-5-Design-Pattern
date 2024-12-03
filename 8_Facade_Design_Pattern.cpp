//? Structural Design Pattern

//* Facade Design Pattern -> The Facade Design Pattern is a structural design pattern that provides a simplified interface to a complex system or set of subsystems. The idea is to create a "facade" — a single, unified interface — that hides the complexity of the underlying system, making it easier to use.
//? Imagine you are at a hotel. Instead of calling the kitchen, housekeeping, room service, and laundry departments directly, you can simply call the front desk. The front desk is a facade that handles all these services behind the scenes. You only interact with one point of contact, the front desk, which simplifies the process for you. The front desk doesn't require you to know how each department works, it just provides the services you need.

// Let’s say you have a complex system for managing a home theater with multiple subsystems like the TV, DVD player, Speaker system, and Lights. To watch a movie, a user needs to interact with several components:

// Turn on the TV
// Turn on the DVD player
// Set the speaker system to the correct mode
// Dim the lights
// Start playing the DVD
// Without the Facade pattern, the client code would need to interact with all of these components directly, which is cumbersome and complicated.

// With the Facade pattern, we create a simple interface (HomeTheaterFacade) that hides the complexity of interacting with each subsystem.