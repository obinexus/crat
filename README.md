# 🧠 CRAT — C Rendering Algorithms & Techniques

**CRAT** is a low-level graphics research project that explores the fundamentals of rendering using **pure C**—no external libraries, no shortcuts. This is a fully self-contained lab for experimenting with ray tracing, materials, and geometric primitives at the metal level.

> ⚠️ Research-first. No dependencies. All libraries are handwritten.

---

## ✨ Features

- 🔫 **Custom Ray Tracer** — define and trace rays manually
- 🌀 **Sphere Geometry** — simple but powerful intersectable objects
- 🎨 **Material System** — raw control over diffuse, specular, and refractive behavior
- 🧱 **Modular Design** — every component lives in its own header (W-style systems dev)
- ⚙️ **Library-Free** — no external image libs, math libs, or render engines used
- 🧪 **Built for Research** — clean baseline for experimenting with your own algorithms

---

## 📁 Project Structure

```plaintext
.
├── main.c             # Entry point
├── ray.h              # Ray struct + trace logic
├── sphere.h           # Sphere struct + intersection function
├── material.h         # Basic material system
├── include/           # Auto-collected headers (by refactor script)
├── obj/               # Object files (git-ignored)
├── TODO               # Development roadmap
└── crat-refactor.ps1  # Dev-only Powershell refactor script
