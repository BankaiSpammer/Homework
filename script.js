const tabButtons = document.querySelectorAll('.tab');
const tabPanels = document.querySelectorAll('.tab-panel');

if (tabButtons.length) {
  tabButtons.forEach((button) => {
    button.addEventListener('click', () => {
      tabButtons.forEach((btn) => btn.classList.remove('active'));
      button.classList.add('active');

      const target = button.dataset.tab;
      tabPanels.forEach((panel) => {
        panel.hidden = panel.dataset.panel !== target;
      });
    });
  });
}

const editableInputs = document.querySelectorAll('.input[contenteditable="true"]');
editableInputs.forEach((input) => {
  input.addEventListener('focus', () => {
    input.classList.add('editing');
  });
  input.addEventListener('blur', () => {
    input.classList.remove('editing');
  });
});
