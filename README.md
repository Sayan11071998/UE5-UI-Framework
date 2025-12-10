# UE5 Frontend UI Framework

A robust, scalable frontend UI framework for Unreal Engine 5 designed with a tag-based asset management system, subsystem-driven architecture, and modular widget stack organization.

**Project Repository:** [UE5-UI-Framework](https://github.com/Sayan11071998/UE5-UI-Framework)  
**Target Version:** Unreal Engine 5.6+  
**Branch:** Loading-Screen

---

## 📋 Table of Contents

- [Overview](#overview)
- [Architecture](#architecture)
- [Project Structure](#project-structure)
- [Core Systems](#core-systems)
- [Key Components](#key-components)
- [Code Architecture Diagrams](#code-architecture-diagrams)
- [Good Practices & Patterns](#good-practices--patterns)
- [Getting Started](#getting-started)
- [License](#license)

---

## Overview

This framework provides a comprehensive UI solution for Unreal Engine 5 games, featuring:

✨ **Key Features:**
- 🏷️ **GameplayTag-based Asset Management** - Centralized widget and image lookup via tags
- 📚 **Subsystem Architecture** - Event-driven, decoupled UI management
- 🎯 **Widget Stack System** - Multiple layered widget stacks (Modal, GameMenu, GameHud, Frontend)
- ⚙️ **Developer Settings** - Configurable UI assets without code changes
- 🔄 **Event-driven Communication** - Multicast delegates for loose coupling
- 💾 **Loading Screen Subsystem** - Intelligent loading screen management with streaming detection

---

## Architecture

### Design Principles

The framework follows **SOLID principles** and **UE5 best practices**:

1. **Dependency Inversion** - Use interfaces and abstraction layers
2. **Single Responsibility** - Each component has one clear purpose
3. **Open/Closed Principle** - Extensible through subclassing
4. **Separation of Concerns** - Settings, logic, and UI are separate
5. **Event-Driven Communication** - Loose coupling via delegates

### High-Level Architecture
┌─────────────────────────────────────────────────────────────┐ │                  Game Instance Layer                         │ │  ┌──────────────────────────────────────────────────────┐   │ │  │           Frontend UI Subsystem (Manager)            │   │ │  │  - Handles widget stack management                   │   │ │  │  - Processes async widget creation                   │   │ │  │  - Manages confirm screens & button events           │   │ │  └──────────────────────────────────────────────────────┘   │ │  ┌──────────────────────────────────────────────────────┐   │ │  │      Loading Screen Subsystem (Visibility Mgmt)      │   │ │  │  - Monitors map loading progress                     │   │ │  │  - Manages loading screen visibility                 │   │ │  │  - Broadcasts loading reason updates                 │   │ │  └──────────────────────────────────────────────────────┘   │ └─────────────────────────────────────────────────────────────┘ ↓ ┌─────────────────────────────────────────────────────────────┐ │                   Settings & Configuration                  │ │  ┌──────────────────────────────────────────────────────┐   │ │  │   Frontend Developer Settings (Data Layer)           │   │ │  │  - FrontendWidgetMap<Tag, Widget Class>              │   │ │  │  - OptionsScreenSoftImageMap<Tag, Texture>           │   │ │  └──────────────────────────────────────────────────────┘   │ │  ┌──────────────────────────────────────────────────────┐   │ │  │   Frontend Gameplay Tags (Identifiers)               │   │ │  │  - Widget Stack Tags                                 │   │ │  │  - Widget Type Tags                                  │   │ │  │  - Image Resource Tags                               │   │ │  └──────────────────────────────────────────────────────┘   │ └─────────────────────────────────────────────────────────────┘ ↓ ┌─────────────────────────────────────────────────────────────┐ │               Function Library (Utility Layer)              │ │  - GetFrontendSoftWidgetClassByTag()                        │ │  - GetOptionsSoftImageByTag()                               │ └─────────────────────────────────────────────────────────────┘ ↓ ┌─────────────────────────────────────────────────────────────┐ │                   Widget Hierarchy                          │ │  ┌──────────────────────────────────────────────────────┐   │ │  │       Widget_ActivatableBase (Abstract)              │   │ │  │  - Common activatable widget base                    │   │ │  │  - GetOwningFrontendPlayerController()               │   │ │  │  - Derived by all UI screens                         │   │ │  └──────────────────────────────────────────────────────┘   │ │  ┌──────────────────────────────────────────────────────┐   │ │  │   Concrete Widget Implementations                    │   │ │  │  - MainMenuScreen                                    │   │ │  │  - OptionsScreen                                     │   │ │  │  - ConfirmScreen                                     │   │ │  │  - KeyRemapScreen                                    │   │ │  │  - PressAnyKeyScreen                                 │   │ │  └──────────────────────────────────────────────────────┘   │ └─────────────────────────────────────────────────────────────┘
